#pragma once

#include <iostream>
#include <string>

struct Document {
    Document();

    Document(int id, double relevance, int rating);

    int id;
    double relevance;
    int rating;
};

enum class DocumentStatus {
    ACTUAL,
    IRRELEVANT,
    BANNED,
    REMOVED,
};

std::ostream& operator<<(std::ostream& output, const Document& document);