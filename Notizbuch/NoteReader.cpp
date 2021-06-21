#include "NoteReader.h"

#include <fstream>

NoteReader::NoteReader(const std::string& noteFilePath)
   : m_noteFilePath(noteFilePath)
{
}


std::string NoteReader::getNote(const std::string& description) const
{
   return std::string();
}

std::vector<std::string> NoteReader::getDescriptions() const
{
   return std::vector<std::string>();
}
