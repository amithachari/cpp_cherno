#include<iostream>
#include<string>
#include<stdlib.h>
#include <memory>

class Entity{
    private:

    public:
        int x, y;
        Entity(){
             std::cout << "Created Entity" << std::endl;
        }
        ~Entity(){
             std::cout << "Destroyed Entity" << std::endl;
        }
        void Print(){
            std::cout << "Check Print " << std::endl;
        }
};

class ScopedPtr{
    private:
        Entity* m_Ptr;
    public:
        ScopedPtr(Entity* ptr): m_Ptr(ptr){
            
        }
        ~ScopedPtr(){
            delete m_Ptr;
        }
};


int main(){
    {
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();
        entity->Print();
    }
    return 0;
}