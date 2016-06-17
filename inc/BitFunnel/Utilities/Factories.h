#pragma once

#include <memory>
#include <vector>

namespace BitFunnel
{
    class ITaskDistributor;
    class ITaskProcessor;

    namespace Factories
    {
        std::unique_ptr<ITaskDistributor> CreateTaskDistributor(
            const std::vector<std::unique_ptr<ITaskProcessor>>& processors,
            size_t taskCount);
    }
}
