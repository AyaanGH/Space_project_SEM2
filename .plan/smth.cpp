void ChanceAndCommunityChestVectorSetter(string ChanceOrCommunityChest) 
{
		if (ChanceOrCommunityChest.compare("Chance") == 0) 
		{
			VectorChanceOrCommunityChest = 
			{
			{1,"You lose 100",100},
			{2,"You lose 200",200},
			{3,"You lose 300",300}


			};

		}
		if (ChanceOrCommunityChest.compare("Community Chest") == 0) {
			VectorChanceOrCommunityChest = 
			{
			{1,"You gain 100",100},
			{2,"You gain 200",200},
			{3,"You gain 300",300}

			};

		}

}
