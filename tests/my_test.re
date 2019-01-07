open TestFramework;

describe("my test suite", ({test}) => {
    test("do something", ({expect}) => {
        let value = RelyDuneTest.Util.foo();
        expect.string(value).toEqual("hello");
    });
});
