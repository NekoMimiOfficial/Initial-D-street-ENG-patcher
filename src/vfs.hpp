#ifndef __InitDVFS__
#define __InitDVFS__

#include "utils.cpp"
#include <cstdint>
#include <string>
#include <vector>

using namespace std;

bool checkXBB(FileBuffer file);

class VFSstruct
{
  private:
    uint8_t magicFlag4;
    uint8_t fileCount;

  public:
    VFSstruct();
};

class ANAstruct
{
  private:
    uint8_t magicFlag4;
    uint8_t magicFlagD;
    uint8_t fileCount;

  public:
    ANAstruct();
};

class FileData
{
  private:
    std::string fileName;
    std::vector<uint8_t> data;
    uint8_t startPointer;
    uint8_t endPointer;
    uint8_t size;
    uint8_t nextFilePointer;
};

#endif // !__InitDVFS__
