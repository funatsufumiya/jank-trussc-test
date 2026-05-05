# jank TrussC test

[jank](https://jank-lang.org/) and [TrussC](https://github.com/TrussC-org/TrussC) ([website](https://trussc.org/index.html)) integration test

![docs/screenshot.png](docs/screenshot.png)

Tested on Win/Mac (in Windows, used [jank-win](https://github.com/ikappaki/jank-win). for Mac, see [#installation](https://book.jank-lang.org/getting-started/01-installation.html))

## Run

```bash
$ lein run
```

## Dev

[TrussC-dll](https://github.com/funatsufumiya/TrussC-dll) is used instead of TrussC original code. Headers are modified for them, mainly for C dylib integration.

Currently using TrussC v0.5.0.1 from [TrussC-dll releases v0.5.0.1-260505-002-dll-export](https://github.com/funatsufumiya/TrussC-dll/releases/tag/v0.5.0.1-260505-002-dll-export)
