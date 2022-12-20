#include <SFML/Graphics.hpp>
#include <iostream>

int main(){
    sf::RenderWindow window( sf::VideoMode(600,600),"EventMouse");

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
            case sf::Event::MouseButtonPressed:
                std::cout << "Mouse Key Pressed" << event.key.code << std::endl;
                break;
            case sf::Event::MouseWheelMoved:
                std::cout << "Mouse Scrooled" << std::endl;
                std::cout << " Delta : " << event.mouseWheel.delta << std::endl;
                break;
            case sf::Event::MouseMoved:
                // std::cout << event.mouseMove.x << " | " << event.mouseMove.y << std::endl;
                break;
            case sf::Event::MouseEntered:
                std::cout << "Mouse Enter the window" << std::endl;
                break;
            case sf::Event::MouseLeft:
                std::cout << "Mouse Left the window" << std::endl;
                break;
            }            
        }
        
        window.clear();

        window.display();
    }
    
}