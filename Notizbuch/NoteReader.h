#pragma once

#include <string>
#include <vector>

/// @brief
class NoteReader
{
public:
   /// @brief
   /// @param noteFilePath
   NoteReader(const std::string& noteFilePath);

   /// @brief
   /// @param description
   std::string getNote(const std::string& description) const;

   /// @brief
   std::vector<std::string> getDescriptions() const;

   void helloNotizbuch();

private:

   std::string m_noteFilePath;
};
