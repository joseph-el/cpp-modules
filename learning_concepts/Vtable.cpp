
#include <stdlib.h>
#include <stdint.h>

class Foo {
public:
    int a;

    void asdf() {}
};

class Bar {
public:
    int a;

    virtual void asdf() {}
};

int main(int argc, char **argv) {
    Foo foo;
    Bar bar;

    printf("&foo=%p &foo.a=%p delta=%lld\n", &foo, &foo.a, uint64_t(&foo.a) - uint64_t(&foo));
    printf("&bar=%p &bar.b=%p delta=%lld\n", &bar, &bar.a, uint64_t(&bar.a) - uint64_t(&bar));

    return 0;
}
