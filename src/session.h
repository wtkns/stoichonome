// session.h
namespace Stoichonome
{
    class Session
    {
    public:
        static int patchID;
        static bool playing;
        void initialize();
        void play();
        void stop();
        void status();
        // void loadPatch();
        // void storePatch();
        // int setLastPatchID();
        // int getLastPatchID();
    };

}