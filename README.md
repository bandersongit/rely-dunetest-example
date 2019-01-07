# rely-dune-test
Example for using Rely with dune's built in runtest

To run:
```
npm install -g esy

esy install
esy build
esy test
```

This doesn't show incremental progress for slower running tests (play with the values in my_test.re to see how this plays out). I think overall running a separate executable is a better user experience, but this shows that it is possible to use the built in dune test stanza with Rely.
