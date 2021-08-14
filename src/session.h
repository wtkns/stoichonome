// session.h
namespace Stoichonome

{
    class Session
    {
    private:
        static int patchID;
        static bool playing;

        static void LoadPatch(int);
        // void storePatch();
        // int setLastPatchID();
        static int GetLastPatchID();

    public:

        static void Initialize();
        static void Play();
        static void Stop();
        static void PrintStatus();
    };

}