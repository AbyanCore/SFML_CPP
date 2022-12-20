#include <SFML/Graphics.hpp>
#include <iostream>

int main(){
    sf::RenderWindow window(sf::VideoMode(800,800),"SET UP Window");
    sf::CircleShape cyl(150);

    while(window.isOpen()){

        sf::Event event;
        while(window.pollEvent( event )){
            switch(event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::MouseWheelMoved:
                    
                    break;
            }
            
            if (sf::Mouse::Wheel(sf::Event::MouseWheelScrolled))
            {
                if (cyl.getPointCount() < 3)
                {
                    cyl.setPointCount(3);
                } else {
                    cyl.setPointCount(cyl.getPointCount() + event.mouseWheel.delta);
                    std::cout << event.mouseWheel.delta << std::endl;
                }
                    
            }
            

        }

        window.clear();

        window.draw(cyl);

        window.display();
    }

}