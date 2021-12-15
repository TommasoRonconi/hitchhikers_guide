##############################################################
# Initialization:

# Load libraries
import numpy as np

# Load argument variables here?
# [ ... ]

# define internal functions
def func ( v1, v2 ) :
    return v1 * np.exp( v2 )

# define variables
aa = np.linspace( 0, 100, 1000 )

# load inputs
bb = np.load( 'inputarray.npy' )

# check initializations 
if aa.size != bb.size :
    raise Exception(
        f'Input arrays should have same size = {aa.size}'
    )
size = aa.size

# initialize output
cc = np.empty( size )

##############################################################
# Start operations:

# Loop on the domain
for ii in range( size ) :
    cc[ ii ] = func( aa[ ii ], bb[ ii ] )

##############################################################
# Finalize program:

# Check everything went fine:
if np.isnan( cc ).any() or not np.isfinite( cc ).all() :
    raise Exception(
        'Something went wrong.'
        )
    
# Store outputs
np.save( 'outputarray.npy', cc )

# end.
##############################################################
