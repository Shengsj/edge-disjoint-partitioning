#ifndef INDEX_H_
#define INDEX_H_
#include <unordered_map>
#include "partition.h"

class Index
{
	private:
		std::unordered_map<uint32_t, Partition> partitions_;
	public:
		Partition& GetPartition(uint32_t label);
		void CreatePartition(uint32_t label);
};
#endif