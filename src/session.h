// session.h
namespace Stoichonome
{
    class Session
    {
    public:
        int id();
        bool playing;
        // void load();
        void initialize();
        void play();
        void status();
        // void store();
    };

}