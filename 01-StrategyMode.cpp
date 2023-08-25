//
// Created by raner on 2023-08-25.
//
#include <iostream>
#include <memory>
using namespace std;

namespace smode{
    class QuackBehavior {
    public:
        virtual void quack() = 0;
    };
    class Quack : public QuackBehavior {
    public:
        void quack() override;
    };

    void Quack::quack() {
        cout << "quack" << endl;  // perform normal quack
    }
    class Squeak : public QuackBehavior {
    public:
        void quack() override;
    };

    void Squeak::quack() {
        cout << "squeak" << endl;  // perform rubber duck squeak
    }
    class MuteQuack : public QuackBehavior {
    public:
        void quack() override;
    };

    void MuteQuack::quack() {
        cout << "...no sound..." << endl;  // do nothing
    }

    class FlyBehavior {
    public:
        virtual void fly() = 0;
    };
    class FlyWithWings : public FlyBehavior {
    public:
        void fly() override;
    };

    void FlyWithWings::fly() {
        cout << "flying" << endl;
    }
    class FlyNoWay : public FlyBehavior {
    public:
        void fly() override;
    };

    void FlyNoWay::fly() {
        cout << "...cannot fly..." << endl;
    }

    class Duck {
    private:
        QuackBehavior *quackBehavior {nullptr};
        FlyBehavior *flyBehavior {nullptr};
//        unique_ptr<QuackBehavior> quackBehavior {nullptr};
//        unique_ptr<FlyBehavior> flyBehavior {nullptr};
    public:
        void swim();
        virtual void display() = 0;
        void performQuack();
        void performFly();
        void setQuackBehavior(QuackBehavior qb);
        void setFlyBehavior(FlyBehavior &fb);
    };

    void Duck::swim() {
        cout << "swimming" << endl;
    }

    void Duck::performQuack() {
        quackBehavior->quack();
    }

    void Duck::performFly() {
        flyBehavior->fly();
    }

    void Duck::setQuackBehavior(smode::QuackBehavior qb) {
        quackBehavior = &qb;
    }

    class MallardDuck : public Duck {
    public:
        MallardDuck() {
            quackB
        }
    };
}

int main() {
    int a = 0;
    unique_ptr<int> p {nullptr};
    int *b = &a;
    p = b;

    return 0;
}
