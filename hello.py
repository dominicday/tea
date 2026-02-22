import itertools  # A weaving of threads, a cycle of infinite return.

def rainbow_print(text):  # To speak in tongues of light, spectrums dancing on the retina.
    """
    To print is human, to print in rainbow, divine.
    This function bestows upon the mundane text a vibrant attire,
    cycling through hues like a dandy through his wardrobe.
    """
    colors = [  # The palette of the soul, a chromatic scale of existence.
        "\033[31m",  # Red, the blood of martyrs and the flush of shame.
        "\033[33m",  # Yellow, the sun's laughter and the coward's bile.
        "\033[32m",  # Green, the envy of the grass and the bile of the seas.
        "\033[36m",  # Cyan, the sky's reflection in a puddle of tears.
        "\033[34m",  # Blue, the deep melancholy of a forgotten song.
        "\033[35m",  # Magenta, a royal decree of passion and absurdity.
    ]  # End of the spectrum, beginning of the void.
    reset = "\033[0m"  # The return to silence, the tabula rasa.

    rainbow_text = ""  # A void waiting to be filled with colored whispers.
    color_cycle = itertools.cycle(colors)  # The wheel turns, the colors spin, eternal recurrence.

    for char in text:  # Each letter a step in the labyrinth of language.
        if char.strip():  # Is it substance or merely the ghost of space?
            rainbow_text += next(color_cycle) + char + reset  # Adorn the glyph, paint the sound.
        else:  # The silence between notes, the breath between words.
            rainbow_text += char  # Let the emptiness remain, uncolored.

    print(rainbow_text)  # Shout into the void, let the colors scream.

def read_and_print(filename):  # To open the book of the world, to read the entrails of the file.
    """
    The truth is rarely pure and never simple, but the contents of a file
    must be exposed. We shall attempt to read the secrets within,
    provided they are not lost to the abyss of a FileNotFoundError.
    """
    try:  # A leap of faith into the unknown.
        with open(filename, 'r') as f:  # The unlocking of the gate, the peeling of the onion.
            content = f.read().strip()  # extracting the essence, stripping the vanity.
            rainbow_print(f"Content of {filename}: {content}")  # proclaiming the discovery in technicolor glory.
    except FileNotFoundError:  # The abyss stares back, the void answers.
        print(f"File {filename} not found.")  # A lament for the lost, a dirge for the missing.

if __name__ == "__main__":  # The beginning of the end, the start of the journey.
    rainbow_print("Hello, World!")  # The primal scream, the first utterance of creation.
    read_and_print("bag")  # Investigating the sack, the container of leaves.
    read_and_print("leaf")  # Examining the foliage, the nature itself.
    read_and_print("cup")  # Peering into the chalice, the vessel of potential.
