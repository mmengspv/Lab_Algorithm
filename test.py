from random import randrange


def shuffle(items) -> None:
    """A naive method. This is an example of what not to do -- use Fisher-Yates instead."""
    n = len(items)
    for i in range(n):
        j = randrange(n)
        """Swap variable"""
        items[j], items[i] = items[i], items[j]


def is_sorted(data) -> bool:
    """Determine whether the data is sorted."""
    return all(data[i] <= data[i + 1] for i in range(len(data) - 1))


def bogosort(data) -> list:
    """Shuffle data until sorted."""
    while not is_sorted(data):
        shuffle(data)
    return data


a = [1, 999, 500, 654, 300]
print(bogosort(a))
