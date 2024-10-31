#pragma once

#include "Resource.hpp"

class ResourceManager
{
    Resource* obiekt_;

public:
    ResourceManager()
    { 
            obiekt_ = new Resource{};
    }

    ResourceManager(const ResourceManager& rm)
    { 
        obiekt_ = new Resource{*rm.obiekt_};
    }

    ResourceManager& operator=(const ResourceManager& rm)
    {
        if (this == &rm) {
            return *this;
        }
        else 
        {
        delete obiekt_;
        obiekt_ = new Resource{*rm.obiekt_};
        return *this;
        }
    }

    ~ResourceManager() { delete obiekt_;  }

    double get() { return (*obiekt_).get();}
};
