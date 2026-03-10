#!/usr/bin/env python3

import sys
import re
from pathlib import Path


def remove_comments(code: str) -> str:
    pattern = re.compile(
        r"""
        //.*?$           |   # single-line comments
        /\*.*?\*/        |   # multi-line comments
        "(?:\\.|[^\\"])*"|   # double-quoted strings
        '(?:\\.|[^\\'])*'    # single-quoted strings
        """,
        re.DOTALL | re.MULTILINE | re.VERBOSE,
    )

    def replacer(match):
        s = match.group(0)
        if s.startswith('/'):
            return ""
        return s

    return pattern.sub(replacer, code)


def process_file(filepath):
    with open(filepath, "r", encoding="utf-8", errors="ignore") as f:
        code = f.read()

    cleaned = remove_comments(code)

    with open(filepath, "w", encoding="utf-8") as f:
        f.write(cleaned)


def main():
    if len(sys.argv) != 2:
        print("Usage: python remove_comments_dir.py <directory>")
        sys.exit(1)

    root = Path(sys.argv[1])

    if not root.is_dir():
        print("Error: not a directory")
        sys.exit(1)

    for file in root.rglob("*.c"):
        print(f"Processing {file}")
        process_file(file)


if __name__ == "__main__":
    main()
