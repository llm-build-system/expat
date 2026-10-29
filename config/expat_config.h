#ifndef LLM_EXPAT_CONFIG_H
#define LLM_EXPAT_CONFIG_H
#define BYTEORDER 1234
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_SYS_TYPES_H 1
#define XML_CONTEXT_BYTES 1024
#define XML_DTD 1
#define XML_GE 1
#define XML_NS 1
#if defined(__linux__)
#define HAVE_GETRANDOM 1
#define HAVE_UNISTD_H 1
#elif defined(__APPLE__)
#define HAVE_ARC4RANDOM_BUF 1
#define HAVE_UNISTD_H 1
#endif
#endif
