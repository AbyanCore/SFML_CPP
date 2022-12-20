#include <SFML/Graphics.hpp>
#include <iostream>

int main(){

    sf::RenderWindow window(sf::VideoMode(600,600),"Live Keyboard");

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            }

            if (sf::Keyboard::isKeyPressed( sf::Keyboard::Space))
            {
                std::cout << "Space Pressed" << std::endl;
            }
            
        }
        
        window.clear();
        window.display();
    }
    

}