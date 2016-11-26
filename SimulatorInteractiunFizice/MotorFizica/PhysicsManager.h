#pragma once

#ifdef PHYSICS_EXPORTS  
#define PHYSICS_API __declspec(dllexport)   
#else  
#define PHYSICS_API __declspec(dllimport)   
#endif  

namespace Physics{
	/*
	 * class: PhysicsManager
	 */
	class PhysicsManager
	{
		public:
			PhysicsManager(void);
			~PhysicsManager(void);
	};
}

