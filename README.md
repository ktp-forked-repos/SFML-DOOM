# SFML-DOOM
[![Build status](https://img.shields.io/appveyor/ci/jonnyptn/sfml-doom.svg?label=windows)](https://ci.appveyor.com/project/JonnyPtn/sfml-doom)
[![](https://img.shields.io/codeship/9687c4c0-e4f1-0134-823a-4a091761e024/master.svg?label=linux)](https://app.codeship.com/projects/206363)

Original DOOM source code adapted to use c++ (as modern as possible...).

Makes use of SFML for the window, graphics, input, audio and networking.

Intended to work exactly as originally intended all those years ago, so if you notice anything out of order please let me know!

I'm also very open to improvement suggestions.

## Building

SFML is the only dependency, so get it from your package manager or pre-built binaries from www.sfml-dev.org

Use cmake to generate the project files, setting the SFML_ROOT cmake variable to the path to your SFML installation
