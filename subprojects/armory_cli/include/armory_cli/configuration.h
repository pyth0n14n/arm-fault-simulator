#pragma once

#include "armory/context.h"

namespace armory_cli
{
    struct CodeSection
    {
        std::string name;
        std::vector<u8> bytes;
        u32 offset;
    };

    struct Configuration
    {
        mulator::Architecture arch;
        armory::MemoryRange flash;
        armory::MemoryRange ram;
        u32 start_address;
        std::vector<CodeSection> binary;
        std::vector<u32> halt_addresses;
        std::vector<u32> symbol_addresses;
        std::unordered_map<u32, std::string> symbol_names;

        armory::Context faulting_context;
        u32 num_threads;
    };
}    // namespace armory_cli
