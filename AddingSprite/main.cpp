#include <SFML/Graphics.hpp>
#include <iostream>

int main(){
    sf::RenderWindow window(sf::VideoMode(800,800),"SET UP Window");
    
    sf::Texture texture;

    if (!texture.loadFromFile("./Assets/Sprite_1.png"))
    {
        std::cout << "Texture Tidak Di temukan" << std::endl;
    }
    
    sf::Sprite sprite(texture);
    

    while(window.isOpen()){

        sf::Event event;
        while(window.pollEvent( event )){
            switch(event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
            }
        }
        window.clear();

        window.draw(sprite);

        window.display();
    }

}