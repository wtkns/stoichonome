// session.h
namespace Stoichonome

{
    class Session
    {
    private:
        static int patchID;
        static bool playing;
        static int randSeed;

        static void LoadPatch(int);
        static void SetLastPatchID(int);
        static int GetLastPatchID();

    public:

        static void Initialize();
        static void Play();
        static void Stop();
        static void PrintStatus();
        static void StorePatch();
    };

}