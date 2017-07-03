#ifndef DOG_H_
#define DOG_H_
class Dog
{
    private:
        int age;
    public:
        enum class color_s{BLACK=1,YELLOW=2,RED=3};
        enum color_s color;
        int length;
        char name[100];
        Dog();
        ~Dog();
        void print();
        void setColor(color_s cs);
};
#endif
