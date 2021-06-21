#include "NoteReader.h"

#include <fstream>
#include <iostream>

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

void NoteReader::helloNotizbuch()
{
   std::cout << "Hello Notizbuch!" << std::endl;
}
