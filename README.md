# Hello Webassembly
Hello world example with webassembly and CMake

## Building
 1. Setup [emscripten](http://kripken.github.io/emscripten-site/docs/getting_started/downloads.html) (including `source ./emsdk_env.sh`)
 2. run `./build.sh`

The output wil then be in ./dist

## Serving files
The resulting files can be served by a http server, for exampke [http-server](https://www.npmjs.com/package/http-server).

`cd dist && http-server .`

## Console log
Opening the hosted files (in my case at http://127.0.0.1:8080) and viewing the Console gives:

```
prerun
From app: Opening file: /input.txt
From app: File opened
From app: /input.txt: Hello webassembly
From app: Opening file: /not-existing-file.abc
From app: Could not open file.
From app: usage: ./this.program path
```
