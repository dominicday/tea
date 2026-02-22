import itertools

def rainbow_print(text):
    colors = [
        "\033[31m",  # Red
        "\033[33m",  # Yellow
        "\033[32m",  # Green
        "\033[36m",  # Cyan
        "\033[34m",  # Blue
        "\033[35m",  # Magenta
    ]
    reset = "\033[0m"

    rainbow_text = ""
    color_cycle = itertools.cycle(colors)

    for char in text:
        if char.strip():
            rainbow_text += next(color_cycle) + char + reset
        else:
            rainbow_text += char

    print(rainbow_text)

def read_and_print(filename):
    try:
        with open(filename, 'r') as f:
            content = f.read().strip()
            rainbow_print(f"Content of {filename}: {content}")
    except FileNotFoundError:
        print(f"File {filename} not found.")

if __name__ == "__main__":
    rainbow_print("Hello, World!")
    read_and_print("bag")
    read_and_print("leaf")
    read_and_print("cup")
