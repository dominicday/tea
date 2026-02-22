
def read_and_print(filename):
    try:
        with open(filename, 'r') as f:
            content = f.read().strip()
            print(f"Content of {filename}: {content}")
    except FileNotFoundError:
        print(f"File {filename} not found.")

if __name__ == "__main__":
    print("Hello, World!")
    read_and_print("bag")
    read_and_print("leaf")
    read_and_print("cup")
