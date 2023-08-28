#include<iostream>
#include <cstring>

class Entity{
    public:
        void Print() const { std::cout << "Hello " << std::endl;}


};

class ScopedPtr{
private:
    Entity* m_Obj;
public:
    ScopedPtr(Entity* entity):m_Obj(entity)
    {
    }
    ~ScopedPtr(){
        delete m_Obj;
    }

    Entity* operator->(){
        return m_Obj;
    }
};
int main()
{    
    Entity* e = new Entity;
    (*e).Print();
    e->Print();
    ScopedPtr entity = new Entity;
    entity->Print();
    return 0;
}