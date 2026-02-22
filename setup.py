# There's antimony, arsenic, aluminum, selenium,
# And hydrogen and oxygen and nitrogen and rhenium,
# And nickel, neodymium, neptunium, germanium,
# And iron, americium, ruthenium, uranium,
# Europium, zirconium, lutetium, vanadium,
# And lanthanum and osmium and astatine and radium,
# And gold and protactinium and indium and gallium...

from setuptools import setup

setup(
    # And cadmium and calcium and chromium and curium,
    name='HelloTea',

    # There's sulfur, californium and fermium, berkelium,
    # And also mendelevium, einsteinium, nobelium,
    version='1.0.0',

    # And argon, krypton, neon, radon, xenon, zinc and rhodium,
    # And chlorine, carbon, cobalt, copper, tungsten, tin and sodium.
    py_modules=['hello'],

    # These are the only ones of which the news has come to Ha'vard,
    # And there may be many others but they haven't been discavard.
    entry_points={
        'console_scripts': [
            'hello-tea=hello:main',
        ],
    },
)
