import os
import re
from collections import defaultdict


def get_base_key(filename):
    """Derive base group key from filename using prefix match (you can customize this)."""
    # Remove extension
    name = os.path.splitext(filename)[0]
    # Remove version or suffix like _v2, _integration, etc.
    base = re.split(
        r'[_-](v\d+|integration|unit|e2e|test|spec)?$', name, maxsplit=1)[0]
    return base.lower()


def group_test_files(folder_path):
    groups = defaultdict(list)
    for file in os.listdir(folder_path):
        if file.startswith("test_") and file.endswith(".py"):
            key = get_base_key(file)
            groups[key].append(file)

    return groups


def print_groups(groups):
    for i, (key, files) in enumerate(groups.items(), 1):
        print(f"Group {i} ({key}):")
        for file in files:
            print(f"  - {file}")
        print()


# Example usage
if __name__ == "__main__":
    folder = "./codes/2_reverse_number"  # Change to your folder path
    grouped = group_test_files(folder)
    print_groups(grouped)
