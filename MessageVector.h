#ifndef MESSAGEVECTOR_H
#define MESSAGEVECTOR_H

#include "itkIndex.h"

#include "Message.h"

class Node;

#include <vector>

// This class represents all of the outgoing messages between a node and one of its neighbors.

class MessageVector
{
public:
  MessageVector();
  void Normalize();

  Node* FromNode;
  Node* ToNode;

  std::vector<Message> Messages; // The vector of messages

  std::vector<Message>& GetMessages();
  Message& GetMessage(const unsigned int i);
  Message& GetMessageWithLabel(const int label);
  unsigned int GetNumberOfMessages() const;

  void OutputMessage(const unsigned int i) const;
  void OutputAllMessageValues() const;
  std::vector<float> GetAllMessageValues() const;

  void AddMessage(Message);

  bool IsValid();
  
private:

};

std::ostream& operator<<(std::ostream& output, const MessageVector &m);

#endif