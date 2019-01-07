open TestFramework;

describe("my test suite", ({test}) => {
    for (i in 1 to 100) {
        test("do something" ++ string_of_int(i), ({expect}) => {
            Unix.sleepf(0.05);
            let value = RelyDuneTest.Util.foo();
            expect.string(value).toEqual("hello");
        });
    }
});
