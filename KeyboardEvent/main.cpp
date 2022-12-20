#include <SFML/Graphics.hpp>
#include <iostream>

int main(){

    sf::RenderWindow window( sf::VideoMode(600,600),"KeyboardEvent");
    
    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                    std::cout << "Key Pressed" << std::endl;
                    switch (event.key.code){
                        case sf::Keyboard::A:
                            std::cout << "A Pressed" << std::endl;
                            break;
                    }
                    break;
                case sf::Event::KeyReleased:
                    switch (event.key.code){
                        case sf::Keyboard::A:
                            std::cout << "B Release" << std::endl;
                            break;
                    }
                    std::cout << "Key Release" << std::endl;
                    break;
            }
        }
        

        window.clear();

        window.display();
    }
    

}