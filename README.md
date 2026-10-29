# Expat - llm port

Original project: [Expat](https://github.com/libexpat/libexpat), version 2.9.0.
Original authors: James Clark, Clark Cooper and the Expat contributors/maintainers. [Original repository](https://github.com/libexpat/libexpat).

The library is the work of its original authors, not a product of llm-build-system.
This repository only maintains its llm build integration and source subset,
it is not an official upstream release. Upstream source and header files are
unchanged. Build configuration files added by this port are kept separately.
Upstream build systems, command-line tools, tests and manuals are omitted.

The original license is preserved verbatim in [LICENSE](LICENSE).
[Upstream license](https://github.com/libexpat/libexpat/blob/R_2_9_0/COPYING). Copyright and per-file license notices
remain in the original files.

Additional upstream copyright and license notices from the included source
files are reproduced verbatim in [NOTICE](NOTICE) for binary redistribution.
The original notices remain in the source files.

Build the static library with `llm build --release`. Consumers include
`<expat.h>`. DTDs, general entities and XML namespaces are enabled.
Platform entropy comes from Windows secure CRT rand_s, Linux getrandom or macOS
arc4random.
