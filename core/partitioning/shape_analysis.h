#include "core/ir/ir.h"
#include "core/partitioning/SegmentedBlock.h"

namespace trtorch {
namespace core {
namespace partitioning {

std::unordered_map<torch::jit::Value*, torch::jit::IValue> generateRandomInputs(std::unordered_map<torch::jit::Value*, ir::InputRange>& input_ranges);

void getSegmentsOutputByRunning(
    SegmentedBlock& seg_block,
    std::unordered_map<torch::jit::Value*, torch::jit::IValue>& ivalues_maps);

} // namespace partitioning
} // namespace core
} // namespace trtorch