import itertools

def rainbow_print(text):
    """
    To print is human, to print in rainbow, divine.
    This function bestows upon the mundane text a vibrant attire,
    cycling through hues like a dandy through his wardrobe.
    """
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
    """
    The truth is rarely pure and never simple, but the contents of a file
    must be exposed. We shall attempt to read the secrets within,
    provided they are not lost to the abyss of a FileNotFoundError.
    """
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
