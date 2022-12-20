#include <SFML/Graphics.hpp>
#include <iostream>

int main(){

    sf::RenderWindow window( sf::VideoMode(500,500),"TextEvent");

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
                case sf::Event::TextEntered:
                    std::cout << "Text Entered" << std::endl;    

                    if (event.text.unicode == 65)
                    {
                        std::cout << "A" << std::endl;
                    }
                    break;
            }

            window.clear();
            window.display();
        }
        
    }
    
}