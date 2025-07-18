#include <Entities/Being.hpp>
#include <Managers/GraphicsManager.hpp>
#include <iostream>

//Game::Managers::GraphicsManager* Game::Being::pGM = nullptr;

namespace Game{
    Managers::GraphicsManager* Being::pGM = nullptr;
    Being::Being(){
        cout << "Default Being constructor called" << endl;
        id = 0;
        pGM = nullptr;
        pText = nullptr;
        body = RectangleShape();
    }

    Being::Being(const Vector2f position, const Vector2f size){
        id = 0;
        pGM = nullptr;
        pText = nullptr;
        body = RectangleShape(size);
        body.setPosition(position);
    }
    Being::Being(const RectangleShape givenbody){
        id = 0;
        pGM = nullptr;
        pText = nullptr;
        body = givenbody;
    }

    Being::~Being(){
        cout << "Being destructor called" << endl;
        delete pFig;
        pFig = nullptr;
    }

    void Being::setGM(Managers::GraphicsManager* pointerGM){
        if (pointerGM != NULL)
            pGM = pointerGM;
    }
    
    const RectangleShape& Being::getBody() const{
        return body;
    }
}