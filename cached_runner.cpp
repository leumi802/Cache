#include "cached_runner.h"

CachedRunner::CachedRunner(Cache &cache) {

}

// 파일의 숫자를 전부 곱하여 반환한다
double CachedRunner::multiply(std::string filename) {
    // 캐시에서 찾아보기
}

// 파일에서 가장 긴 팰린드롬을 찾아 인덱스를 반환한다
int CachedRunner::palindrome(std::string filename) {
    // 캐시에서 찾아보기
}

// 캐시에 히트한 횟수를 반환한다
int CachedRunner::hits() {
    return ++hit;
}

// 캐시에 미스한 횟수를 반환한다
int CachedRunner::misses() {
    return ++miss;   
}