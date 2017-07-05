#include "deque.h"

#include <cassert>
#include <cstring>
#include <stdio.h>

void Inttest1();
void Inttest2();
void Inttest3();
void Inttest4();
void Inttest5();
void Inttest6();
void Inttest7();
void Inttest8();
void Inttest9();
void Inttest10();
void Inttest11();
void Inttest12();
void Inttest13();
void Inttest14();
void Inttest15();
void Inttest16();
void Strtest1();
void Strtest2();
void Strtest3();
void Strtest4();
void Strtest5();
void Strtest6();
void Strtest7();
void Strtest8();
void Strtest9();
void Strtest10();
void Strtest11();
void Strtest12();
void Strtest13();
void Strtest14();
void Strtest15();
void Strtest16();

int main() {
    try {
        Inttest1();
        Inttest2();
        Inttest3();
        Inttest4();
        Inttest5();
        Inttest6();
        Inttest7();
        Inttest8();
        Inttest9();
        Inttest10();
        Inttest11();
        Inttest12();
        Inttest13();
        Inttest14();
        Inttest15();
        Inttest16();
        Strtest1();
        Strtest2();
        Strtest3();
        Strtest4();
        Strtest5();
        Strtest6();
        Strtest7();
        Strtest8();
        Strtest9();
        Strtest10();
        Strtest11();
        Strtest12();
        Strtest13();
        Strtest14();
        Strtest15();
        Strtest16();
    }

    catch (int error) {
        switch (error) {
            case 1: {
                printf("Error in Front function");
                break;
            }
            case 2: {
                printf("Error in Back function");
                break;
            }
            case 3: {
                printf("Error in operator ostream");
                break;
            }
            case 4: {
                printf("Error in Pop_back function");
                break;
            }
            case 5: {
                printf("Error in Pop_front function");
                break;
            }
            case 6: {
                printf("Error in Clear function");
                break;
            }
        }
    }
    return 0;
}

void Inttest1() {
    printf("Int Test1: default constructor\n");
    deque<int> T;
    assert(T.Size() == 0);
    printf("Int Test1 sucсsessfully done\n");
    printf("\n");
}

void Inttest2() {
    printf("Int Test2: Copy Constructor\n");
    deque<int> T;
    T.Push_back(4);
    deque<int> Q(T);
    std::cout << Q << std::endl;
    printf("Int Test2 sucсsessfully done\n");
    printf("\n");
}

void Inttest3() {
    printf("Int Test3: Push_back function\n");
    deque<int> T;
    T.Push_back(1);
    T.Push_back(2);
    T.Push_back(3);
    std::cout << T << std::endl;
    printf("Int Test3 sucсsessfully done\n");
    printf("\n");
}

void Inttest4() {
    printf("Int Test4: Pop_back function\n");
    deque<int> T;
    T.Push_back(4);
    T.Push_back(6);
    T.Push_back(8);
    T.Pop_back();
    std::cout << T << std::endl;
    printf("Int Test4 sucсsessfully done\n");
    printf("\n");

}

void Inttest5() {
    printf("Int Test5: Push_front function\n");
    deque<int> T;
    T.Push_front(1);
    T.Push_front(2);
    T.Push_front(3);
    std::cout << T << std::endl;
    printf("Int Test5 sucсsessfully done\n");
    printf("\n");
}

void Inttest6() {
    printf("Int Test6: Pop_front function\n");
    deque<int> T;
    T.Push_back(4);
    T.Push_back(6);
    T.Push_back(8);
    T.Push_front(10);
    T.Pop_front();
    std::cout << T << std::endl;
    printf("Int Test6 sucсsessfully done\n");
    printf("\n");

}

void Inttest7() {
    printf("Int Test7: Size function\n");
    deque<int> T;
    T.Push_back(4);
    T.Push_back(6);
    T.Push_back(8);
    T.Push_front(10);
    assert(T.Size() == 4);
    std::cout << T.Size() << std::endl;
    printf("Int Test7 sucсsessfully done\n");
    printf("\n");
}
void Inttest8() {
    printf("Int Test8: Operator+\n");
    deque<int> T, Q, S;
    T.Push_back(4);
    T.Push_back(6);
    T.Push_back(8);
    Q.Push_back(4);
    Q.Push_front(10);
    S = T + Q;
    std::cout << S << std::endl;
    printf("Int Test8 sucсsessfully done\n");
    printf("\n");
}

void Inttest9() {
    printf("Int Test9: Operator=\n");
    deque<int> T, Q;
    T.Push_back(4);
    T.Push_back(6);
    T.Push_back(5);
    Q.Push_back(4);
    Q.Push_front(10);
    T = Q;
    std::cout << T << std::endl;
    printf("Int Test9 sucсsessfully done\n");
    printf("\n");

}

void Inttest10() {
    printf("Int Test10: Operator==\n");
    deque<int> T, Q;
    T.Push_back(4);
    T.Push_back(5);
    Q.Push_back(4);
    Q.Push_back(5);
    if (Q == T)
        std::cout << Q << std::endl;
    else
        std::cout << "They aren't equal" << std::endl;
    printf("Int Test10 sucсsessfully done\n");
    printf("\n");
}

void Inttest11() {
    printf("Int Test11: Operator!=\n");
    deque<int> T, Q;
    T.Push_back(4);
    T.Push_back(5);
    Q.Push_back(5);
    Q.Push_back(5);
    if (Q != T)
        std::cout << "They aren't equal" << std::endl;
    else
        std::cout << "They are equal" << std::endl;
    printf("Int Test11 sucсsessfully done\n");
    printf("\n");
}

void Inttest12() {
    printf("Int Test12: Front function\n");
    deque<int> T, Q;
    T.Push_back(4);
    T.Push_back(5);
    assert(T.Front() == 4);
    std::cout << T.Front() << std::endl;
    printf("Int Test12 sucсsessfully done\n");
    printf("\n");
}

void Inttest13() {
    printf("Int Test13: Back fucntion\n");
    deque<int> T, Q;
    T.Push_back(4);
    T.Push_back(5);
    assert(T.Back() == 5);
    std::cout << T.Back() << std::endl;
    printf("Int Test13 sucсsessfully done\n");
    printf("\n");
}

void Inttest14() {
    printf("Int Test14: Empty function\n");
    deque<int> T;
    if (T.Empty())
        std::cout << "Deque is Empty" << std::endl;
    else
        std::cout << "Deque isn't Empty" << std::endl;
    printf("Int Test14 sucсsessfully done\n");
    printf("\n");
}

void Inttest15() {
    printf("Int Test15: Function Clear\n");
    deque<int> T;
    T.Push_back(4);
    T.Push_back(5);
    T.Clear();
    assert(T.Size() == 0);
    std::cout << T << std::endl;
    printf("Int Test15 sucсsessfully done\n");
    printf("\n");
}

void Inttest16() {
    printf("Int Test16: Sort function\n");
    deque<int> T;
    T.Push_back(12);
    T.Push_back(1);
    T.Push_back(4);
    T.Push_back(5);
    T.Push_back(7);
    T.Push_back(11);
    T.Push_back(8);
    T.DequeSort();
    std::cout << T << std::endl;
    printf("Int Test16 sucсsessfully done\n");
    printf("\n");
}

void Strtest1() {
    printf("String Test1: default constructor\n");
    deque<std::string> T;
    assert(T.Size() == 0);
    printf("String Test1 sucсsessfully done\n");
    printf("\n");
}

void Strtest2() {
    printf("String Test2: Copy Constructor\n");
    deque<std::string> T;
    T.Push_back("four");
    deque<std::string> Q(T);
    std::cout << Q << std::endl;
    printf("String Test2 sucсsessfully done\n");
    printf("\n");
}

void Strtest3() {
    printf("String Test3: Push_back function\n");
    deque<std::string> T;
    T.Push_back("one");
    T.Push_back("two");
    T.Push_back("three");
    std::cout << T << std::endl;
    printf("String Test3 sucсsessfully done\n");
    printf("\n");
}

void Strtest4() {
    printf("StringTest4: Pop_back function\n");
    deque<std::string> T;
    T.Push_back("four");
    T.Push_back("six");
    T.Push_back("eigth");
    T.Pop_back();
    std::cout << T << std::endl;
    printf("String Test4 sucсsessfully done\n");
    printf("\n");

}

void Strtest5() {
    printf("String Test5: Push_front function\n");
    deque<std::string> T;
    T.Push_front("one");
    T.Push_front("two");
    T.Push_front("three");
    std::cout << T << std::endl;
    printf("String Test5 sucсsessfully done\n");
    printf("\n");
}

void Strtest6() {
    printf("String Test6: Pop_front function\n");
    deque<std::string> T;
    T.Push_back("four");
    T.Push_back("six");
    T.Push_back("eight");
    T.Push_front("ten");
    T.Pop_front();
    std::cout << T << std::endl;
    printf("String Test6 sucсsessfully done\n");
    printf("\n");

}

void Strtest7() {
    printf("String Test7: Size function\n");
    deque<std::string> T;
    T.Push_back("four");
    T.Push_back("six");
    T.Push_back("eigtht");
    T.Push_front("ten");
    assert(T.Size() == 4);
    std::cout << T.Size() << std::endl;
    printf("String Test7 sucсsessfully done\n");
    printf("\n");
}
void Strtest8() {
    printf("String Test8: Operator+\n");
    deque<std::string> T, Q, S;
    T.Push_back("four");
    T.Push_back("six");
    T.Push_back("eight");
    Q.Push_back("four");
    Q.Push_front("ten");
    S = T + Q;
    std::cout << S << std::endl;
    printf("String Test8 sucсsessfully done\n");
    printf("\n");
}

void Strtest9() {
    printf("String Test9: Operator=\n");
    deque<std::string> T, Q;
    T.Push_back("four");
    T.Push_back("six");
    T.Push_back("five");
    Q.Push_back("four");
    Q.Push_front("ten");
    T = Q;
    std::cout << T << std::endl;
    printf("String Test9 sucсsessfully done\n");
    printf("\n");

}

void Strtest10() {
    printf("String Test10: Operator==\n");
    deque<std::string> T, Q;
    T.Push_back("four");
    T.Push_back("five");
    Q.Push_back("four");
    Q.Push_back("five");
    if (Q == T)
        std::cout << Q << std::endl;
    else
        std::cout << "They aren't equal" << std::endl;
    printf("String Test10 sucсsessfully done\n");
    printf("\n");
}

void Strtest11() {
    printf("String Test11: Operator!=\n");
    deque<std::string> T, Q;
    T.Push_back("five");
    T.Push_back("five");
    Q.Push_back("five");
    Q.Push_back("five");
    if (Q != T)
        std::cout << "They aren't equal" << std::endl;
    else
        std::cout << "They are equal" << std::endl;
    printf("String Test11 sucсsessfully done\n");
    printf("\n");
}

void Strtest12() {
    printf("String Test12: Front function\n");
    deque<std::string> T, Q;
    T.Push_back("4");
    T.Push_back("5");
    assert(T.Front() == "4");
    std::cout << T.Front() << std::endl;
    printf("String Test12 sucсsessfully done\n");
    printf("\n");
}

void Strtest13() {
    printf("String Test13: Back fucntion\n");
    deque<std::string> T, Q;
    T.Push_back("four");
    T.Push_back("five");
    assert(T.Back() == "five");
    std::cout << T.Back() << std::endl;
    printf("String Test13 sucсsessfully done\n");
    printf("\n");
}

void Strtest14() {
    printf("String Test14: Empty function\n");
    deque<std::string> T;
    if (T.Empty())
        std::cout << "Deque is Empty" << std::endl;
    else
        std::cout << "Deque isn't Empty" << std::endl;
    printf("String Test14 sucсsessfully done\n");
    printf("\n");
}

void Strtest15() {
    printf("String Test15: Function Clear\n");
    deque<std::string> T;
    T.Push_back("four");
    T.Push_back("five");
    T.Clear();
    assert(T.Size() == 0);
    std::cout << T << std::endl;
    printf("String Test15 sucсsessfully done\n");
    printf("\n");
}

void Strtest16() {
    printf("String Test16: Sort function\n");
    deque<std::string> T;
    T.Push_back("twelve");
    T.Push_back("one");
    T.Push_back("four");
    T.Push_back("f");
    T.Push_back("a");
    T.Push_back("b");
    T.Push_back("e");
    T.DequeSort();
    std::cout << T << std::endl;
    printf("Int Test16 sucсsessfully done\n");
    printf("\n");
}
