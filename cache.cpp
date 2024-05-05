#include "cache.h"

int Cache::Hash::hash(std::string key) {
    int sum = 0;
    for (int i = 0; i < key.length(); i++) {
        sum += key[i];
    }
    return sum % HASH_SIZE;
}

Cache::Cache() {
    head = NULL;
    size = 0;
}

Cache::~Cache() {
    // Node들 다 동적 할당 해제 시켜주기

}

void Cache::add(std::string key, int value) {
    // 동적할당
    // Node에 key, value 추가
    Node* newNode = new Node(key, value);
    // 맨 앞에 link
    newNode->setNext(head);
    head = newNode;
}

void Cache::add(std::string key, double value) {
    
}
  
bool Cache::get(std::string key, int &value) {
    
}

bool Cache::get(std::string key, double &value) {
    
}

std::string Cache::toString() {

}