# CStandards
C Standards

Example of use

```
#if defined(__STDC_VERSION__) && __STDC_VERSION__ == C99
...
C 99 code
...
#endif
```

another example

```
#if STDC_VERSION == CKR
...
CKR code
...
#elif STDC_VERSION == C89
...
C89 code
...
#elif STDC_VERSION == C95
...
C95 code
...
#else
...
other code
...
#endif
```

another example

```
printf("stdc              = %d\n",  GET_STDC());
printf("stdc version      = %ld\n", GET_STDC_VERSION());
printf("stdc version year = %ld\n", GET_STDC_VERSION_YEAR());
printf("hosted            = %d\n",  GET_STDC_HOSTED());
```
