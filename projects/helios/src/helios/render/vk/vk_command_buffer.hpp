#pragma once

#include <helios/containers/vector.hpp>
#include <helios/macros.hpp>
#include <helios/render/graphics.hpp>

#include <glad/vulkan.h>

namespace helios
{
    struct VulkanCommandPool;

    struct VulkanCommandBuffer final : ICommandBuffer
    {
        VulkanCommandBuffer() = default;
        ~VulkanCommandBuffer() override;

        void record() const override;
        void end() const override;
        void beginRenderPass(const RenderPassRecordInfo& info,
                             const bool isInline) override;
        void endRenderPass() override;
        void bind(const IGraphicsPipeline* pipeline) override;
        void draw(const u32 vertices, const u32 instances, const u32 baseVertex,
                  const u32 baseInstance) override;

        bool destroyed = false;
        VulkanCommandPool* pool = nullptr;
        VkCommandBuffer buffer = VK_NULL_HANDLE;

        HELIOS_NO_COPY_MOVE(VulkanCommandBuffer)
    };
} // namespace helios