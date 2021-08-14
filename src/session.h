// session.h
namespace Stoichonome

{
    class Session
    {
    private:
        static int patchID;
        static bool playing;

        // void loadPatch();
        // void storePatch();
        // int setLastPatchID();
        // int getLastPatchID();

    public:

        static void Initialize();
        static void Play();
        static void Stop();
        static void Status();
    };

}