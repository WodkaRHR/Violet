/* 
 * File:   prng.h
 * Author: Domi
 *
 * Created on 5. Januar 2018, 14:37
 */

#ifndef PRNG_H
#define	PRNG_H

#ifdef	__cplusplus
extern "C" {
#endif

    extern u32 _main_rnd;

    void rnd_init(); //Initializes the main rng module (xorshift)

    /**
     * Provides new 16 bit random value (periodicity is 2^32)
     * @return 16 bit random value
     */
    u16 rnd16();

    /**
     * Provides a random fixed point number ~ N(0, 1) from the main rng
     * @return x ~ N(0, 1)
     */
    FIXED rnd_normal();

    /**
     * Sets the seed of the main rng module
     * @param seed
     * @return 
     */
    void rnd_main_set_seed(u32 seed);

    /**
     * Shifts any 32 bit rng state
     * @param _seed Pointer to prng state
     * @return Next state
     */
    u32 _prng_xorshift(u32 *_seed);

    /**
     * Returns a fixed point value distributed ~ N(0, 1)
     * @param _seed Pointer the prng state
     * @return Next state
     */
    FIXED _prng_stdnormal(u32 *_seed);

    /**
     * Chooses with probabilities proportional to an array.
     * @param p an (unnormalized) probability array, with the requirement that values >= 0
     * @param p_size the size of the probability array
     * @param rng a random number generator. If NULL is given, rnd16 is used
     * @return an index in [0, size-1]
    */
    int choice(u32 *p, int p_size, u16 (*rng)());

    /**
     * Chooses with probabilties derived from a scoring array using a softmax function with temperature 20 / 1024
     * @param logits the scores to draw from
     * @param size the size of the scores array
     * @param min the overall minimal possible score (not within the actual logits array, but the context the function is called in)
     * @param min the overall maximal possible score (not within the actual logits array, but the context the function is called in)
     * @param rng a random number generator. If NULL is given, rnd16 is used
     * @return an index in [0, size-1]
     **/
    int softmax_choice(int *logits, int size, int min, int max, u16 (*rng)());


#ifdef	__cplusplus
}
#endif

#endif	/* PRNG_H */

