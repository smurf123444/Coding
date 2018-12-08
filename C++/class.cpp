#include <iostream>

#define LOG(x) std::cout << x << std::endl

class Player
{
private:
    //can be private class
public:
    int x, y;
    int speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

int main()
{
    Player player;
    player.x = 5;
    player.y = 6;
    player.Move(4,6);
    LOG(player.x);
    LOG(player.y);
    std::cin.get();

}